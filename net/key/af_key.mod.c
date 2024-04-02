#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xb6552e, "sock_no_sendpage" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0xadbe88f7, "sock_no_getsockopt" },
	{ 0x61a7378c, "sock_no_setsockopt" },
	{ 0x68399656, "sock_no_shutdown" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x92e83972, "sock_no_ioctl" },
	{ 0x95685855, "datagram_poll" },
	{ 0xe63246ae, "sock_no_getname" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0xacef23f8, "sock_no_connect" },
	{ 0x9c6c0e2f, "sock_no_bind" },
	{ 0xe6afa575, "xfrm_register_km" },
	{ 0xa80c15d5, "sock_register" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xcd45ab23, "proto_register" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xec880f86, "xfrm_unregister_km" },
	{ 0xe5995f1b, "xfrm_audit_policy_add" },
	{ 0xce7d35f7, "xfrm_policy_insert" },
	{ 0xe520e7b1, "xfrm_policy_alloc" },
	{ 0x264036c6, "xfrm_alloc_spi" },
	{ 0xfeb5d0aa, "verify_spi_info" },
	{ 0x8eabd8fa, "xfrm_find_acq" },
	{ 0xa9c63b69, "security_xfrm_policy_free" },
	{ 0x831700fa, "xfrm_policy_bysel_ctx" },
	{ 0xb15cb614, "security_xfrm_policy_alloc" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa785fd45, "xfrm_find_acq_byseq" },
	{ 0xcec729b4, "xfrm_state_add" },
	{ 0xf244589d, "xfrm_audit_state_add" },
	{ 0x909a6b61, "xfrm_state_update" },
	{ 0x394fdca6, "xfrm_audit_state_delete" },
	{ 0x2460aa63, "xfrm_state_delete" },
	{ 0xc599a772, "security_xfrm_state_delete" },
	{ 0xcd63af67, "xfrm_policy_destroy" },
	{ 0x31268a75, "xfrm_audit_policy_delete" },
	{ 0xd8da465c, "xfrm_policy_byid" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xed946a48, "init_net" },
	{ 0xd6f50cf7, "xfrm_ealg_get_byname" },
	{ 0xaab23340, "xfrm_calg_get_byname" },
	{ 0x37a02412, "xfrm_aalg_get_byname" },
	{ 0x7a8ca627, "xfrm_count_pfkey_enc_supported" },
	{ 0xa575945, "xfrm_count_pfkey_auth_supported" },
	{ 0x28e23139, "xfrm_probe_algs" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0xe5dad3af, "xfrm_state_lookup" },
	{ 0xb73be794, "xfrm_ealg_get_byidx" },
	{ 0xc6b1fdbe, "xfrm_aalg_get_byidx" },
	{ 0xfb578fc5, "memset" },
	{ 0x2b84d6e9, "xfrm_state_walk_init" },
	{ 0xf88aafa7, "__sock_recv_ts_and_drops" },
	{ 0x3f0ffbe, "skb_free_datagram" },
	{ 0xc26ef464, "skb_copy_datagram_iter" },
	{ 0x6bab7f5e, "skb_recv_datagram" },
	{ 0x27e1a049, "printk" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x72395dc1, "xfrm_calg_get_byid" },
	{ 0x5c699441, "xfrm_aalg_get_byid" },
	{ 0x98c2d757, "__xfrm_state_destroy" },
	{ 0xe39a3c2a, "xfrm_init_state" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc80741, "xfrm_ealg_get_byid" },
	{ 0x37a0cba, "kfree" },
	{ 0x27866435, "security_xfrm_state_alloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x75952ba7, "xfrm_state_alloc" },
	{ 0x465e8067, "xfrm_migrate" },
	{ 0x1e9edfb7, "seq_hlist_start_head_rcu" },
	{ 0x67b78eb3, "seq_hlist_next_rcu" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xf712e17d, "from_kuid_munged" },
	{ 0xb3ac9813, "sock_i_uid" },
	{ 0xb29c9658, "sock_i_ino" },
	{ 0x2b42dd03, "proc_create_net_data" },
	{ 0x9738f202, "km_state_notify" },
	{ 0x1e93f34b, "xfrm_state_flush" },
	{ 0x6bd75d38, "xfrm_state_walk" },
	{ 0xaef9048a, "xfrm_state_walk_done" },
	{ 0xa816dfec, "skb_copy" },
	{ 0x31975d66, "km_policy_notify" },
	{ 0xb6a7b48f, "xfrm_policy_flush" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x3114074c, "sock_init_data" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xcd73146f, "sk_alloc" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0xe449de6b, "xfrm_policy_walk_done" },
	{ 0xc9df055a, "xfrm_policy_walk_init" },
	{ 0x5e4b6469, "xfrm_policy_walk" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xa592a1a, "sk_free" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x41967777, "sock_rfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D91AFDB429380409353F7A6");
MODULE_INFO(rhelversion, "8.0");

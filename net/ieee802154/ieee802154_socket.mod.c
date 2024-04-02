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
	{ 0x373ba864, "release_sock" },
	{ 0xfcce8aed, "dev_load" },
	{ 0x3114074c, "sock_init_data" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xda92407d, "dev_getbyhwaddr_rcu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe6e34593, "dev_get_by_name" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xe63246ae, "sock_no_getname" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x8ef09616, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6bab7f5e, "skb_recv_datagram" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x65b7dca1, "sk_common_release" },
	{ 0xcb57cec7, "compat_sock_common_setsockopt" },
	{ 0x68a77c57, "sock_common_recvmsg" },
	{ 0xb6552e, "sock_no_sendpage" },
	{ 0xa99ad2af, "sock_get_timestamp" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x8111e5ea, "compat_sock_common_getsockopt" },
	{ 0xc7b96247, "ieee802154_hdr_pull" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0xcd73146f, "sk_alloc" },
	{ 0xc26ef464, "skb_copy_datagram_iter" },
	{ 0x27e1a049, "printk" },
	{ 0x9c6c0e2f, "sock_no_bind" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0xc8596e51, "sock_prot_inuse_add" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x5def83f9, "skb_push" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xcd5371ef, "dev_get_by_index" },
	{ 0x552c4aaf, "dev_remove_pack" },
	{ 0xed946a48, "init_net" },
	{ 0x68399656, "sock_no_shutdown" },
	{ 0xf88aafa7, "__sock_recv_ts_and_drops" },
	{ 0xcd45ab23, "proto_register" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xa6f8de0f, "sock_get_timestampns" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x95685855, "datagram_poll" },
	{ 0xa80c15d5, "sock_register" },
	{ 0xb98bfd6b, "dev_getfirstbyhwtype" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x53937271, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xae6a7857, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x3a99fda, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x3490f9db, "dev_add_pack" },
	{ 0x509f625d, "consume_skb" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3f0ffbe, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ieee802154";


MODULE_INFO(srcversion, "59C0C3FFC08E1B73CF5837F");
MODULE_INFO(rhelversion, "8.0");

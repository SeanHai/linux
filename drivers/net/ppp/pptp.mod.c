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
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0x2dd63735, "sock_no_recvmsg" },
	{ 0x537b5209, "sock_no_sendmsg" },
	{ 0xadbe88f7, "sock_no_getsockopt" },
	{ 0x61a7378c, "sock_no_setsockopt" },
	{ 0x68399656, "sock_no_shutdown" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x4b677a69, "pppox_ioctl" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x999e8297, "vfree" },
	{ 0x956ac21a, "gre_del_protocol" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0x4884a52f, "register_pppox_proto" },
	{ 0xcd45ab23, "proto_register" },
	{ 0x8e8f41f8, "gre_add_protocol" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xf54365e9, "ppp_input" },
	{ 0x8ef09616, "sock_queue_rcv_skb" },
	{ 0xa592a1a, "sk_free" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x2b72d91c, "pppox_unbind_sock" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x14a3b35e, "__sk_receive_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xcc584dfe, "__ip_select_ident" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x37faa150, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x5def83f9, "skb_push" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x509f625d, "consume_skb" },
	{ 0xa210c10b, "skb_set_owner_w" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x27e1a049, "printk" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0x501a51d7, "ppp_register_channel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x62739462, "sk_setup_caps" },
	{ 0x44dd64d9, "ip_route_output_flow" },
	{ 0x678d2993, "security_sk_classify_flow" },
	{ 0x373ba864, "release_sock" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3114074c, "sock_init_data" },
	{ 0xcd73146f, "sk_alloc" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,gre,ppp_generic";


MODULE_INFO(srcversion, "9646CC1D1B7C4DF8FD36CE6");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x68399656, "sock_no_shutdown" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x4b677a69, "pppox_ioctl" },
	{ 0x95685855, "datagram_poll" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0x9c6c0e2f, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x66bf735e, "unregister_pernet_device" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x144aeb11, "l2tp_nl_register_ops" },
	{ 0x4884a52f, "register_pppox_proto" },
	{ 0xcd45ab23, "proto_register" },
	{ 0x9e6a466, "register_pernet_device" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x844d765a, "l2tp_xmit_skb" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x8ccd0447, "sock_wmalloc" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x2b72d91c, "pppox_unbind_sock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf1a19428, "l2tp_session_set_header_len" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xba233bca, "l2tp_tunnel_register" },
	{ 0xe1a20147, "l2tp_tunnel_create" },
	{ 0x87066b0c, "l2tp_tunnel_delete" },
	{ 0x50db9c9f, "l2tp_session_delete" },
	{ 0x373ba864, "release_sock" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb3296adc, "ppp_register_net_channel" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x458f5c96, "l2tp_session_get" },
	{ 0x8dcc89df, "l2tp_tunnel_get" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0x41715c18, "seq_puts" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x71969637, "ppp_dev_name" },
	{ 0xce3ef8ff, "l2tp_session_get_nth" },
	{ 0xa592a1a, "sk_free" },
	{ 0x46dbfd47, "l2tp_session_free" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x6d859098, "l2tp_tunnel_free" },
	{ 0x92c74da4, "l2tp_tunnel_get_nth" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x2b42dd03, "proc_create_net_data" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc26ef464, "skb_copy_datagram_iter" },
	{ 0x6bab7f5e, "skb_recv_datagram" },
	{ 0x6ad4cae4, "l2tp_udp_encap_recv" },
	{ 0x3114074c, "sock_init_data" },
	{ 0xcd73146f, "sk_alloc" },
	{ 0x27e1a049, "printk" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x8ef09616, "sock_queue_rcv_skb" },
	{ 0xf54365e9, "ppp_input" },
	{ 0x37a0cba, "kfree" },
	{ 0x9c2e7a83, "l2tp_session_register" },
	{ 0xdefba5c3, "l2tp_session_create" },
	{ 0xfc33ccad, "dst_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,l2tp_netlink,l2tp_core,ppp_generic";


MODULE_INFO(srcversion, "389D978E086CA5678E6EAD9");
MODULE_INFO(rhelversion, "8.0");

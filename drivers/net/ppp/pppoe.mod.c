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
	{ 0xadbe88f7, "sock_no_getsockopt" },
	{ 0x61a7378c, "sock_no_setsockopt" },
	{ 0x68399656, "sock_no_shutdown" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x4b677a69, "pppox_ioctl" },
	{ 0x95685855, "datagram_poll" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0x9c6c0e2f, "sock_no_bind" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x552c4aaf, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x66bf735e, "unregister_pernet_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3490f9db, "dev_add_pack" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0x4884a52f, "register_pppox_proto" },
	{ 0xcd45ab23, "proto_register" },
	{ 0x9e6a466, "register_pernet_device" },
	{ 0xb3296adc, "ppp_register_net_channel" },
	{ 0xe6e34593, "dev_get_by_name" },
	{ 0x2d008a32, "pskb_trim_rcsum_slow" },
	{ 0x14a3b35e, "__sk_receive_skb" },
	{ 0xdfa89d8, "skb_pull_rcsum" },
	{ 0xf54365e9, "ppp_input" },
	{ 0x8ef09616, "sock_queue_rcv_skb" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x2659cf1a, "dev_get_by_name_rcu" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x2b42dd03, "proc_create_net_data" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xa592a1a, "sk_free" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x2b72d91c, "pppox_unbind_sock" },
	{ 0x41715c18, "seq_puts" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x373ba864, "release_sock" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x8ccd0447, "sock_wmalloc" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x509f625d, "consume_skb" },
	{ 0xc26ef464, "skb_copy_datagram_iter" },
	{ 0x6bab7f5e, "skb_recv_datagram" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0x9688b47c, "dev_queue_xmit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3114074c, "sock_init_data" },
	{ 0xcd73146f, "sk_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";


MODULE_INFO(srcversion, "662BC702D32E5FEAC2CB083");
MODULE_INFO(rhelversion, "8.0");

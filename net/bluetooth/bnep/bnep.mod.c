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
	{ 0x3114074c, "sock_init_data" },
	{ 0xea2b701b, "up_read" },
	{ 0x86db5987, "kernel_sendmsg" },
	{ 0xde320733, "sockfd_lookup" },
	{ 0x61a7378c, "sock_no_setsockopt" },
	{ 0xadbe88f7, "sock_no_getsockopt" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xe63246ae, "sock_no_getname" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xaefb72d4, "bt_sock_register" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x91185511, "down_read" },
	{ 0x47022514, "bt_err" },
	{ 0xd7442057, "bt_info" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x2dd63735, "sock_no_recvmsg" },
	{ 0xbd997815, "bt_sock_unlink" },
	{ 0xfca44c56, "netif_rx_ni" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xcd73146f, "sk_alloc" },
	{ 0xf7d6636f, "current_task" },
	{ 0x4d6ee304, "l2cap_is_socket" },
	{ 0x9c6c0e2f, "sock_no_bind" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd8e4198d, "baswap" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xa592a1a, "sk_free" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x85142f62, "up_write" },
	{ 0xed946a48, "init_net" },
	{ 0x65baf559, "down_write" },
	{ 0x50d83074, "fput" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x68399656, "sock_no_shutdown" },
	{ 0xf54c40c1, "bt_sock_link" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xcd45ab23, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xdc8ef2d0, "proto_unregister" },
	{ 0x9599bf40, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xdcf8b63, "__module_put_and_exit" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a5386e3, "ether_setup" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xacef23f8, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc3a6e1c1, "crc32_be" },
	{ 0x537b5209, "sock_no_sendmsg" },
	{ 0xdec4b638, "set_user_nice" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x931b5b8a, "bt_procfs_init" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x607b6eff, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "EE2904DC6B5F1151D5BBE0F");
MODULE_INFO(rhelversion, "8.0");

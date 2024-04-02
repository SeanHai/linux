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
	{ 0x407482f9, "can_rx_register" },
	{ 0xd54466fb, "can_proto_unregister" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x8ef09616, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6bab7f5e, "skb_recv_datagram" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb6552e, "sock_no_sendpage" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0x27e1a049, "printk" },
	{ 0x55996b98, "lock_sock_nested" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xa592a1a, "sk_free" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0xcd5371ef, "dev_get_by_index" },
	{ 0x68399656, "sock_no_shutdown" },
	{ 0x6068eb41, "can_ioctl" },
	{ 0xadc31089, "can_send" },
	{ 0xf88aafa7, "__sock_recv_ts_and_drops" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x95685855, "datagram_poll" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x441c3b70, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf767afc8, "can_proto_register" },
	{ 0x53937271, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xacef23f8, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x22805e47, "can_rx_unregister" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x3f33e88c, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3f0ffbe, "skb_free_datagram" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "B55802CA995CEB1654BEBFD");
MODULE_INFO(rhelversion, "8.0");

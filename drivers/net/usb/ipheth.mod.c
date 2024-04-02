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
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xcaff94e5, "netif_tx_stop_all_queues" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x7018acf, "usb_altnum_to_altsetting" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0x43d0701a, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp1290d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1292d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1294d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1297d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp129Ad*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A2d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A6d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12ABd*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp129Cd*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A0d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A8d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "63ED50F1E10D6D179483E9D");
MODULE_INFO(rhelversion, "8.0");

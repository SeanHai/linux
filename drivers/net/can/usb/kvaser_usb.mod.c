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
	{ 0xc89d1d60, "can_change_mtu" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2a661171, "close_candev" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0x8972397, "open_candev" },
	{ 0xf025b47f, "register_candev" },
	{ 0x7a5f31b0, "alloc_candev" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x29361773, "complete" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xb731ac23, "can_get_echo_skb" },
	{ 0xa13b3006, "alloc_can_skb" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x509f625d, "consume_skb" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0xd7862824, "can_free_echo_skb" },
	{ 0xe9da2271, "can_put_echo_skb" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xabd938ef, "netif_rx" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xc89e39b4, "alloc_can_err_skb" },
	{ 0xca6d3474, "can_change_state" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0xd4f59b29, "free_candev" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xf63ba7e9, "unregister_candev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("usb:v0BFDp000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp001Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp001Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0123d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0124d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BFDp0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "070C565678989EF610D7C14");
MODULE_INFO(rhelversion, "8.0");

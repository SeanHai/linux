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
	{ 0xf9c388e5, "dev_err" },
	{ 0xf025b47f, "register_candev" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7a5f31b0, "alloc_candev" },
	{ 0x8972397, "open_candev" },
	{ 0x2a661171, "close_candev" },
	{ 0x4fea5b3b, "usb_bulk_msg" },
	{ 0xa13b3006, "alloc_can_skb" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0xd7862824, "can_free_echo_skb" },
	{ 0x509f625d, "consume_skb" },
	{ 0xe9da2271, "can_put_echo_skb" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0x77e92c90, "usb_alloc_coherent" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc9df2273, "can_bus_off" },
	{ 0xabd938ef, "netif_rx" },
	{ 0xc89e39b4, "alloc_can_err_skb" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xb731ac23, "can_get_echo_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x69238564, "usb_free_coherent" },
	{ 0x37a0cba, "kfree" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0xd4f59b29, "free_candev" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("usb:v12D6p0444d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B557CF378C2FE9BA9317307");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x3fa64d02, "ethtool_op_get_link" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x509f625d, "consume_skb" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xdce6588d, "register_netdev" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x3bfae68b, "__dev_kfree_skb_irq" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0x28318305, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0xc3946e2d, "netif_device_attach" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x4bb012cf, "netif_device_detach" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "08C54D78D01764D7C000668");
MODULE_INFO(rhelversion, "8.0");

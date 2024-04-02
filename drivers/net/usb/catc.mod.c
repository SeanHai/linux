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
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xdce6588d, "register_netdev" },
	{ 0x27e1a049, "printk" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x2842a1d7, "alloc_etherdev_mqs" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x84d8b1ac, "usb_kill_urb" },
	{ 0x509f625d, "consume_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x3564bd60, "usb_unlink_urb" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x28318305, "snprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x27776184, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xabd938ef, "netif_rx" },
	{ 0x45a3a859, "eth_type_trans" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xf0c8e802, "netif_carrier_on" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x43d0701a, "free_netdev" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x93f0703, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0423p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0423p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "27317CF7DD6D6A401DD9807");
MODULE_INFO(rhelversion, "8.0");

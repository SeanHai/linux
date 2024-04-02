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
	{ 0xf9f3b0ed, "usbnet_get_stats64" },
	{ 0x7e9f153f, "usbnet_tx_timeout" },
	{ 0x28669e41, "usbnet_change_mtu" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x80a50a34, "usbnet_start_xmit" },
	{ 0x99002040, "usbnet_stop" },
	{ 0xa5cbe32e, "usbnet_open" },
	{ 0xae2a81e5, "usbnet_set_link_ksettings" },
	{ 0x7871459e, "usbnet_get_link_ksettings" },
	{ 0x3294b5fc, "usbnet_nway_reset" },
	{ 0x1dbd7111, "usbnet_set_msglevel" },
	{ 0xd27d018e, "usbnet_get_msglevel" },
	{ 0xc62a69e, "usbnet_resume" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xad9383f8, "usbnet_read_cmd" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x4388bd04, "netif_carrier_off" },
	{ 0x145fd4a, "usbnet_get_endpoints" },
	{ 0x78bda8c, "usbnet_link_change" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x5def83f9, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0x7f782f7e, "usbnet_status_stop" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x4a15d1aa, "usbnet_status_start" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0x318f7969, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xad605485, "usbnet_write_cmd" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0xdad2fe11, "usbnet_skb_return" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd36f5fd6, "usbnet_get_drvinfo" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68A3d*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v1199p68AAd*dc*dsc*dp*ic*isc*ip*in0B*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in07*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0A*");
MODULE_ALIAS("usb:v0F3Dp68AAd*dc*dsc*dp*ic*isc*ip*in0B*");

MODULE_INFO(srcversion, "D6B1A5A3B538C96757273E6");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x38a7735c, "netdev_info" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x9efab5ee, "ethtool_op_get_ts_info" },
	{ 0x7018acf, "usb_altnum_to_altsetting" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xc62a69e, "usbnet_resume" },
	{ 0x563e4e5e, "hrtimer_active" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0x78bda8c, "usbnet_link_change" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x99002040, "usbnet_stop" },
	{ 0x73e961e4, "usbnet_update_max_qlen" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x91715312, "sprintf" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0xb621d8c9, "netif_schedule_queue" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x3294b5fc, "usbnet_nway_reset" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0xae2a81e5, "usbnet_set_link_ksettings" },
	{ 0xfb578fc5, "memset" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf9f3b0ed, "usbnet_get_stats64" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7871459e, "usbnet_get_link_ksettings" },
	{ 0x59651a10, "usb_driver_claim_interface" },
	{ 0xd36f5fd6, "usbnet_get_drvinfo" },
	{ 0x80a50a34, "usbnet_start_xmit" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0x7045fe5b, "usbnet_get_link" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xad9383f8, "usbnet_read_cmd" },
	{ 0xe6478472, "_dev_info" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7e9f153f, "usbnet_tx_timeout" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf1f6a13c, "cdc_parse_cdc_header" },
	{ 0xce9d2cd6, "usbnet_get_ethernet_addr" },
	{ 0xdad2fe11, "usbnet_skb_return" },
	{ 0xb9c51a0c, "usb_driver_release_interface" },
	{ 0xa5cbe32e, "usbnet_open" },
	{ 0xd27d018e, "usbnet_get_msglevel" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf533b14b, "usbnet_unlink_rx_urbs" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6dd5f441, "usb_ifnum_to_if" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x81072318, "usbnet_manage_power" },
	{ 0xad605485, "usbnet_write_cmd" },
	{ 0x1dbd7111, "usbnet_set_msglevel" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1BC7p0036d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BBd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp81BCd*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1519p0443d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v1546p1010d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");

MODULE_INFO(srcversion, "6BC400AA642E2C01EF0EAD1");
MODULE_INFO(rhelversion, "8.0");

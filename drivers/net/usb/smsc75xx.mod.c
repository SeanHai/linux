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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xae2a81e5, "usbnet_set_link_ksettings" },
	{ 0x7871459e, "usbnet_get_link_ksettings" },
	{ 0x7045fe5b, "usbnet_get_link" },
	{ 0x3294b5fc, "usbnet_nway_reset" },
	{ 0x1dbd7111, "usbnet_set_msglevel" },
	{ 0xd27d018e, "usbnet_get_msglevel" },
	{ 0xd36f5fd6, "usbnet_get_drvinfo" },
	{ 0xf9f3b0ed, "usbnet_get_stats64" },
	{ 0x7e9f153f, "usbnet_tx_timeout" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x80a50a34, "usbnet_start_xmit" },
	{ 0x99002040, "usbnet_stop" },
	{ 0xa5cbe32e, "usbnet_open" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x145fd4a, "usbnet_get_endpoints" },
	{ 0x27e1a049, "printk" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0x5def83f9, "skb_push" },
	{ 0xd3ad0c22, "pskb_expand_head" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbb7845aa, "mii_nway_restart" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0x88a2f500, "usbnet_defer_kevent" },
	{ 0xc62a69e, "usbnet_resume" },
	{ 0x38a7735c, "netdev_info" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0x28669e41, "usbnet_change_mtu" },
	{ 0x89d697d5, "mii_ethtool_gset" },
	{ 0x3b862893, "mii_check_media" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21e77254, "usbnet_read_cmd_nopm" },
	{ 0xad9383f8, "usbnet_read_cmd" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2046283, "usbnet_write_cmd_nopm" },
	{ 0xad605485, "usbnet_write_cmd" },
	{ 0xdad2fe11, "usbnet_skb_return" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xbd6841d4, "crc16" },
	{ 0xc2b0d67a, "generic_mii_ioctl" },
	{ 0xbfef472c, "netdev_warn" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0x37a0cba, "kfree" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0xe78bfacd, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2BDE35361813513D33AFA13");
MODULE_INFO(rhelversion, "8.0");

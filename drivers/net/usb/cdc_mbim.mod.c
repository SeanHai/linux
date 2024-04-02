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
	{ 0x7bf6932c, "cdc_ncm_change_mtu" },
	{ 0x372e8e21, "eth_validate_addr" },
	{ 0xc826b84c, "eth_mac_addr" },
	{ 0x80a50a34, "usbnet_start_xmit" },
	{ 0x99002040, "usbnet_stop" },
	{ 0xa5cbe32e, "usbnet_open" },
	{ 0x329503a9, "usbnet_disconnect" },
	{ 0x7bda1555, "usbnet_probe" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x8e525aba, "usb_match_id" },
	{ 0x9ad53cf8, "usb_set_interface" },
	{ 0xae2b8940, "usb_cdc_wdm_register" },
	{ 0x36411337, "cdc_ncm_bind_common" },
	{ 0xc0229117, "cdc_ncm_select_altsetting" },
	{ 0xa8676eaa, "usbnet_suspend" },
	{ 0xc62a69e, "usbnet_resume" },
	{ 0x4644aad4, "cdc_ncm_unbind" },
	{ 0xcf01d9aa, "usb_autopm_put_interface" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf8a5b44d, "usb_autopm_get_interface" },
	{ 0x9bb44688, "__vlan_find_dev_deep_rcu" },
	{ 0x50d31688, "in6_dev_finish_destroy" },
	{ 0x4bea39f, "__dynamic_netdev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc26ae7ad, "ipv6_stub" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xdad2fe11, "usbnet_skb_return" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x7db9fd3a, "__netdev_alloc_skb" },
	{ 0x24ca6231, "cdc_ncm_rx_verify_ndp16" },
	{ 0x13d1344d, "cdc_ncm_rx_verify_nth16" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x2e219c14, "cdc_ncm_fill_tx_frame" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xb6df8e55, "netdev_err" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,cdc_ncm,cdc-wdm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v03F0pA31Dd*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v1BC7p1041d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "25D7BD2E7451CFFD3B1BCD8");
MODULE_INFO(rhelversion, "8.0");

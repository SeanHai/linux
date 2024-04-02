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
	{ 0x19d3c329, "rawv6_mh_filter_unregister" },
	{ 0xab6172c, "xfrm_unregister_type" },
	{ 0x71570a5, "rawv6_mh_filter_register" },
	{ 0xb0c53c85, "xfrm_register_type" },
	{ 0x2ec6987d, "icmpv6_send" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9e974e3c, "km_report" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5def83f9, "skb_push" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x5198f76a, "ipv6_find_tlv" },
	{ 0x27e1a049, "printk" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7A52B322A5E28A720A96DB9");
MODULE_INFO(rhelversion, "8.0");

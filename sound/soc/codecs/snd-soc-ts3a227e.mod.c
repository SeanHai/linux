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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x50e0ab7f, "snd_jack_set_key" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x56902dcc, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4ac859d0, "snd_soc_jack_report" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,ts3a227e");
MODULE_ALIAS("of:N*T*Cti,ts3a227eC*");
MODULE_ALIAS("i2c:ts3a227e");
MODULE_ALIAS("acpi*:104C227E:*");

MODULE_INFO(srcversion, "F9A0370784AE526C6C9C228");
MODULE_INFO(rhelversion, "8.0");

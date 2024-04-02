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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x42b9f36c, "__devm_regmap_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x61ff58e3, "rt5514_spi_burst_read" },
	{ 0xada6de24, "snd_soc_dapm_get_enum_double" },
	{ 0x21829adb, "regmap_register_patch" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x5e065e5d, "snd_soc_dapm_get_volsw" },
	{ 0x6e8b707b, "regmap_multi_reg_write" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0x3775759f, "snd_soc_put_volsw" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x44cc6fa7, "snd_soc_get_volsw" },
	{ 0xc9ce3a94, "snd_soc_info_enum_double" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x27e1a049, "printk" },
	{ 0xb9f13266, "device_property_read_string" },
	{ 0xb245f77f, "snd_soc_dapm_put_volsw" },
	{ 0x9df96596, "snd_soc_info_volsw" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x56902dcc, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0xd750f284, "regcache_mark_dirty" },
	{ 0xff87892f, "rt5514_spi_burst_write" },
	{ 0x7f68b24d, "rl6231_pll_calc" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x749fffb4, "regmap_write" },
	{ 0xe6fa862c, "regcache_sync" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xb3ac59e9, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-rt5514-spi,snd-soc-core,snd-soc-rl6231";

MODULE_ALIAS("i2c:rt5514");
MODULE_ALIAS("acpi*:10EC5514:*");

MODULE_INFO(srcversion, "C956513AA0D8F010777C8BA");
MODULE_INFO(rhelversion, "8.0");

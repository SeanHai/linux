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
	{ 0x42b9f36c, "__devm_regmap_init" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xf9a482f9, "msleep" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xada6de24, "snd_soc_dapm_get_enum_double" },
	{ 0x21829adb, "regmap_register_patch" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x5e065e5d, "snd_soc_dapm_get_volsw" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0x76d818c5, "regcache_cache_bypass" },
	{ 0x70617a04, "rl6231_get_clk_info" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x3775759f, "snd_soc_put_volsw" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x44cc6fa7, "snd_soc_get_volsw" },
	{ 0xa95765cf, "gpiochip_remove" },
	{ 0x110781ef, "gpiochip_add_data_with_key" },
	{ 0xc9ce3a94, "snd_soc_info_enum_double" },
	{ 0xb98f5e97, "acpi_match_device" },
	{ 0x2519c417, "snd_soc_dapm_add_routes" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x8d7fa148, "rl6231_get_pre_div" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x31b4032a, "snd_soc_dapm_force_bias_level" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb245f77f, "snd_soc_dapm_put_volsw" },
	{ 0x24a92cf6, "device_property_read_u8_array" },
	{ 0x3d4d9e00, "gpiochip_get_data" },
	{ 0x9df96596, "snd_soc_info_volsw" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xb3c76c93, "regmap_add_irq_chip" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x56902dcc, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdba4502f, "rl6231_calc_dmic_clk" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xc8269f94, "snd_soc_params_to_frame_size" },
	{ 0x62e2909, "devm_gpiod_get_optional" },
	{ 0xd750f284, "regcache_mark_dirty" },
	{ 0x7f68b24d, "rl6231_pll_calc" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x5d4da26b, "gpiod_set_value_cansleep" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x971b8bfd, "rt5677_spi_write_firmware" },
	{ 0x749fffb4, "regmap_write" },
	{ 0xe6fa862c, "regcache_sync" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x69687740, "regcache_cache_only" },
	{ 0x84277b2a, "release_firmware" },
	{ 0x59cc5a76, "device_property_present" },
	{ 0xb3ac59e9, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd-soc-rl6231,snd-soc-rt5677-spi";

MODULE_ALIAS("of:N*T*Crealtek,rt5677");
MODULE_ALIAS("of:N*T*Crealtek,rt5677C*");
MODULE_ALIAS("acpi*:RT5677CE:*");

MODULE_INFO(srcversion, "90355FC45546CC791C1A2E9");
MODULE_INFO(rhelversion, "8.0");

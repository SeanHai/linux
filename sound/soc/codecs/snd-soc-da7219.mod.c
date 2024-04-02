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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0xccda9cad, "regmap_raw_write" },
	{ 0xada6de24, "snd_soc_dapm_get_enum_double" },
	{ 0x21829adb, "regmap_register_patch" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x5e065e5d, "snd_soc_dapm_get_volsw" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0x76d818c5, "regcache_cache_bypass" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc78c5942, "regmap_bulk_read" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x464b1898, "device_get_named_child_node" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe4a8c122, "snd_soc_component_update_bits" },
	{ 0x64806ce1, "regmap_bulk_write" },
	{ 0x3775759f, "snd_soc_put_volsw" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0xfc3167ba, "fwnode_property_read_string" },
	{ 0x44cc6fa7, "snd_soc_get_volsw" },
	{ 0xc9ce3a94, "snd_soc_info_enum_double" },
	{ 0xf1e8529a, "snd_soc_put_volsw_range" },
	{ 0x9e969d69, "devm_clk_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd9dd4416, "snd_soc_info_volsw_range" },
	{ 0x31b4032a, "snd_soc_dapm_force_bias_level" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xb9f13266, "device_property_read_string" },
	{ 0xb245f77f, "snd_soc_dapm_put_volsw" },
	{ 0x55c8f60, "snd_soc_get_volsw_range" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x9df96596, "snd_soc_info_volsw" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0x217946d, "fwnode_property_read_u32_array" },
	{ 0x6fa7e12, "snd_soc_get_enum_double" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x56902dcc, "devm_snd_soc_register_component" },
	{ 0x1ddf7408, "snd_soc_dapm_sync" },
	{ 0x25b78337, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xd750f284, "regcache_mark_dirty" },
	{ 0xf24ea3e8, "snd_soc_put_enum_double" },
	{ 0x25373bef, "snd_soc_dapm_force_enable_pin" },
	{ 0x171d4a7a, "snd_soc_dapm_disable_pin" },
	{ 0xdd35f5b2, "regcache_sync_region" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xcd86c9b6, "regmap_raw_read" },
	{ 0x5958d625, "clkdev_drop" },
	{ 0x19bc5505, "clkdev_create" },
	{ 0x121da905, "queue_work_on" },
	{ 0x4ac859d0, "snd_soc_jack_report" },
	{ 0xa82fd021, "snd_soc_component_read32" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x59cc5a76, "device_property_present" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb3ac59e9, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("acpi*:DLGS7219:*");
MODULE_ALIAS("i2c:da7219");
MODULE_ALIAS("of:N*T*Cdlg,da7219");
MODULE_ALIAS("of:N*T*Cdlg,da7219C*");

MODULE_INFO(srcversion, "B619471C5381F6CC4FF8561");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xeb711ae7, "snd_soc_params_to_bclk" },
	{ 0x815588a6, "clk_enable" },
	{ 0xada6de24, "snd_soc_dapm_get_enum_double" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x5e065e5d, "snd_soc_dapm_get_volsw" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x7b2d20e3, "snd_soc_dapm_new_controls" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xe4a8c122, "snd_soc_component_update_bits" },
	{ 0x3775759f, "snd_soc_put_volsw" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x44cc6fa7, "snd_soc_get_volsw" },
	{ 0xc9ce3a94, "snd_soc_info_enum_double" },
	{ 0xb98f5e97, "acpi_match_device" },
	{ 0x2519c417, "snd_soc_dapm_add_routes" },
	{ 0xf1e8529a, "snd_soc_put_volsw_range" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x4ed5ce06, "snd_soc_add_component_controls" },
	{ 0xd9dd4416, "snd_soc_info_volsw_range" },
	{ 0x56028c1b, "snd_soc_bytes_info" },
	{ 0xb245f77f, "snd_soc_dapm_put_volsw" },
	{ 0x55c8f60, "snd_soc_get_volsw_range" },
	{ 0x9df96596, "snd_soc_info_volsw" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x43f81957, "clk_round_rate" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6fa7e12, "snd_soc_get_enum_double" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x34c28e23, "pm_wakeup_dev_event" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x56902dcc, "devm_snd_soc_register_component" },
	{ 0x25b78337, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xd750f284, "regcache_mark_dirty" },
	{ 0xf24ea3e8, "snd_soc_put_enum_double" },
	{ 0xabffd98c, "snd_soc_bytes_get" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x543562c1, "snd_soc_bytes_put" },
	{ 0x121da905, "queue_work_on" },
	{ 0x4ac859d0, "snd_soc_jack_report" },
	{ 0xa82fd021, "snd_soc_component_read32" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x749fffb4, "regmap_write" },
	{ 0xe6fa862c, "regcache_sync" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x69687740, "regcache_cache_only" },
	{ 0xb3ac59e9, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("acpi*:193C9890:*");
MODULE_ALIAS("i2c:max98090");
MODULE_ALIAS("i2c:max98091");
MODULE_ALIAS("of:N*T*Cmaxim,max98090");
MODULE_ALIAS("of:N*T*Cmaxim,max98090C*");
MODULE_ALIAS("of:N*T*Cmaxim,max98091");
MODULE_ALIAS("of:N*T*Cmaxim,max98091C*");

MODULE_INFO(srcversion, "A35CD275587D6E5EC33166C");
MODULE_INFO(rhelversion, "8.0");

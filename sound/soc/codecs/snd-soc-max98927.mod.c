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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0xada6de24, "snd_soc_dapm_get_enum_double" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x5e065e5d, "snd_soc_dapm_get_volsw" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0x3775759f, "snd_soc_put_volsw" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0x44cc6fa7, "snd_soc_get_volsw" },
	{ 0xc9ce3a94, "snd_soc_info_enum_double" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xb245f77f, "snd_soc_dapm_put_volsw" },
	{ 0x9df96596, "snd_soc_info_volsw" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0x6fa7e12, "snd_soc_get_enum_double" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x56902dcc, "devm_snd_soc_register_component" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xd750f284, "regcache_mark_dirty" },
	{ 0xf24ea3e8, "snd_soc_put_enum_double" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x749fffb4, "regmap_write" },
	{ 0xe6fa862c, "regcache_sync" },
	{ 0x69687740, "regcache_cache_only" },
	{ 0xb3ac59e9, "snd_soc_dapm_put_enum_double" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("acpi*:MX98927:*");
MODULE_ALIAS("i2c:max98927");

MODULE_INFO(srcversion, "A3EE41AAE3648BFC16E2C8B");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0xf9a482f9, "msleep" },
	{ 0x666afe81, "devm_snd_soc_register_card" },
	{ 0xd18a7958, "snd_soc_dapm_info_pin_switch" },
	{ 0x33e24e17, "snd_soc_dapm_put_pin_switch" },
	{ 0xcb44743c, "devm_gpiod_get" },
	{ 0x6e395b86, "rt5677_sel_asrc_clk_src" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1fdd4517, "devm_acpi_dev_add_driver_gpios" },
	{ 0xb40ff91f, "sst_hsw_device_set_config" },
	{ 0x1a92fce0, "snd_soc_rtdcom_lookup" },
	{ 0x3897eb85, "snd_soc_dapm_get_pin_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfb54c595, "snd_soc_dai_set_sysclk" },
	{ 0xb3bb76d6, "snd_soc_card_jack_new" },
	{ 0x25373bef, "snd_soc_dapm_force_enable_pin" },
	{ 0x171d4a7a, "snd_soc_dapm_disable_pin" },
	{ 0x8cefcca3, "snd_soc_jack_add_gpios" },
	{ 0x5d4da26b, "gpiod_set_value_cansleep" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3fa74627, "devm_kmalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-rt5677,snd-soc-sst-haswell-pcm";


MODULE_INFO(srcversion, "8BB59F5A56DB4E5D1ED9123");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x666afe81, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd18a7958, "snd_soc_dapm_info_pin_switch" },
	{ 0x33e24e17, "snd_soc_dapm_put_pin_switch" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x32d247d2, "ts3a227e_enable_jack_detect" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1fdd4517, "devm_acpi_dev_add_driver_gpios" },
	{ 0x930ce012, "snd_soc_jack_notifier_register" },
	{ 0x3897eb85, "snd_soc_dapm_get_pin_switch" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x1ddf7408, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xfb54c595, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xb3bb76d6, "snd_soc_card_jack_new" },
	{ 0x25373bef, "snd_soc_dapm_force_enable_pin" },
	{ 0x171d4a7a, "snd_soc_dapm_disable_pin" },
	{ 0xf0003dd7, "snd_soc_dai_set_fmt" },
	{ 0xbc1dfc67, "snd_pcm_hw_constraint_minmax" },
	{ 0x79758f1a, "snd_soc_dai_set_tdm_slot" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x9d8d424f, "snd_soc_jack_add_gpiods" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-ts3a227e,snd-pcm";


MODULE_INFO(srcversion, "D6AA04E23B060A48F013435");
MODULE_INFO(rhelversion, "8.0");

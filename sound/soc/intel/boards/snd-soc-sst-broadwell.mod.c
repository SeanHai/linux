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
	{ 0x666afe81, "devm_snd_soc_register_card" },
	{ 0xd18a7958, "snd_soc_dapm_info_pin_switch" },
	{ 0x33e24e17, "snd_soc_dapm_put_pin_switch" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xb40ff91f, "sst_hsw_device_set_config" },
	{ 0x1a92fce0, "snd_soc_rtdcom_lookup" },
	{ 0x3897eb85, "snd_soc_dapm_get_pin_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xfb54c595, "snd_soc_dai_set_sysclk" },
	{ 0xeeb9dfcd, "rt286_mic_detect" },
	{ 0xb3bb76d6, "snd_soc_card_jack_new" },
	{ 0x1895b770, "platform_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-sst-haswell-pcm,snd-soc-rt286";


MODULE_INFO(srcversion, "10AE0D1F9A6D9E279855743");
MODULE_INFO(rhelversion, "8.0");

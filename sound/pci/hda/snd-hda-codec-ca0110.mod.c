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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbf4d250, "snd_hda_gen_free" },
	{ 0x9138fd91, "snd_hda_gen_parse_auto_config" },
	{ 0xc07def35, "snd_hda_gen_build_pcms" },
	{ 0x835f7c4, "snd_hda_jack_unsol_event" },
	{ 0xcfdc801d, "snd_hda_gen_init" },
	{ 0x90cc31b4, "snd_hda_parse_pin_defcfg" },
	{ 0x7204af4, "__hda_codec_driver_register" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xe164f105, "hda_codec_driver_unregister" },
	{ 0x25329b3b, "snd_hda_gen_spec_init" },
	{ 0xdd071875, "snd_hda_gen_build_controls" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec";

MODULE_ALIAS("hdaudio:v1102000Ar*a01*");
MODULE_ALIAS("hdaudio:v1102000Br*a01*");
MODULE_ALIAS("hdaudio:v1102000Dr*a01*");

MODULE_INFO(srcversion, "724140610212F5836ECDF26");
MODULE_INFO(rhelversion, "8.0");

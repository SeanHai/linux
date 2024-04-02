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
	{ 0xf9a482f9, "msleep" },
	{ 0xd0d16731, "snd_hdac_codec_read" },
	{ 0xa8c57f5d, "snd_hdac_regmap_write_raw" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x820fc044, "snd_pcm_hw_constraint_list" },
	{ 0xf572398f, "snd_hdac_regmap_add_vendor_verb" },
	{ 0x7204af4, "__hda_codec_driver_register" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf5fb0a65, "snd_hda_codec_pcm_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ceeb79f, "snd_hdac_codec_write" },
	{ 0xe164f105, "hda_codec_driver_unregister" },
	{ 0xe74529c7, "snd_hda_codec_setup_stream" },
	{ 0x49bd4584, "snd_hda_add_new_ctls" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd-pcm,snd-hda-codec,snd";

MODULE_ALIAS("hdaudio:v163C3055r*a01*");
MODULE_ALIAS("hdaudio:v163C3155r*a01*");
MODULE_ALIAS("hdaudio:v11C13026r*a01*");
MODULE_ALIAS("hdaudio:v11C13055r*a01*");
MODULE_ALIAS("hdaudio:v11C13155r*a01*");
MODULE_ALIAS("hdaudio:v10573055r*a01*");
MODULE_ALIAS("hdaudio:v10573057r*a01*");
MODULE_ALIAS("hdaudio:v10573155r*a01*");
MODULE_ALIAS("hdaudio:v11063288r*a01*");
MODULE_ALIAS("hdaudio:v15433155r*a01*");
MODULE_ALIAS("hdaudio:v18540018r*a01*");

MODULE_INFO(srcversion, "8794A4B7EEE7CA9B474269E");
MODULE_INFO(rhelversion, "8.0");

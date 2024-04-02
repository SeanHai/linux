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
	{ 0xd0d16731, "snd_hdac_codec_read" },
	{ 0x9138fd91, "snd_hda_gen_parse_auto_config" },
	{ 0x85e5434f, "snd_hda_apply_fixup" },
	{ 0xfe1860b5, "snd_hda_pick_fixup" },
	{ 0xc07def35, "snd_hda_gen_build_pcms" },
	{ 0x835f7c4, "snd_hda_jack_unsol_event" },
	{ 0x485fc32a, "snd_hda_codec_set_pincfg" },
	{ 0xbf815c75, "snd_hda_gen_update_outputs" },
	{ 0x27253169, "snd_hda_jack_detect_enable_callback" },
	{ 0x9d8d66ee, "_snd_hda_set_pin_ctl" },
	{ 0x44518d9, "snd_hda_gen_fix_pin_power" },
	{ 0xcfdc801d, "snd_hda_gen_init" },
	{ 0x90cc31b4, "snd_hda_parse_pin_defcfg" },
	{ 0x7204af4, "__hda_codec_driver_register" },
	{ 0xd0c7e746, "snd_hda_override_amp_caps" },
	{ 0x48812696, "snd_hda_jack_detect_state" },
	{ 0x2609b020, "snd_hda_find_mixer_ctl" },
	{ 0xf89ffe4d, "snd_hda_sequence_write" },
	{ 0x4ee6efe0, "snd_hda_ctl_add" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x3ceeb79f, "snd_hdac_codec_write" },
	{ 0xe7b0c875, "snd_hda_codec_get_pincfg" },
	{ 0xe7ba2461, "snd_hda_apply_pincfgs" },
	{ 0xe164f105, "hda_codec_driver_unregister" },
	{ 0x25329b3b, "snd_hda_gen_spec_init" },
	{ 0x72bb1910, "query_amp_caps" },
	{ 0xdd071875, "snd_hda_gen_build_controls" },
	{ 0x42e7fd0b, "snd_hda_shutup_pins" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-core,snd-hda-codec,snd";

MODULE_ALIAS("hdaudio:v10134206r*a01*");
MODULE_ALIAS("hdaudio:v10134207r*a01*");
MODULE_ALIAS("hdaudio:v10134208r*a01*");
MODULE_ALIAS("hdaudio:v10134210r*a01*");
MODULE_ALIAS("hdaudio:v10134213r*a01*");

MODULE_INFO(srcversion, "BC3FCE2247D6F0E0DF8A030");
MODULE_INFO(rhelversion, "8.0");

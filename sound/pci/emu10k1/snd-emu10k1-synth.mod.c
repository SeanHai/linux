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
	{ 0x3a21c76b, "snd_emux_new" },
	{ 0x606e77f4, "snd_emu10k1_synth_alloc" },
	{ 0x369ec100, "snd_emux_register" },
	{ 0x378dce7b, "snd_emu10k1_memblk_map" },
	{ 0xaee71187, "snd_emu10k1_voice_alloc" },
	{ 0xa9621e00, "__snd_seq_driver_register" },
	{ 0x90e54eb, "snd_emu10k1_synth_bzero" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x1135f5e7, "snd_emux_free" },
	{ 0x89e146dd, "snd_emu10k1_ptr_write" },
	{ 0xeeba617d, "snd_emu10k1_synth_free" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x678016f1, "snd_emu10k1_voice_free" },
	{ 0xb4de568a, "snd_emu10k1_synth_copy_from_user" },
	{ 0x1be74fdb, "snd_emu10k1_ptr_read" },
	{ 0x4324c313, "snd_seq_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-emux-synth,snd-emu10k1,snd-seq-device";


MODULE_INFO(srcversion, "0430085254355503F0B4FAD");
MODULE_INFO(rhelversion, "8.0");

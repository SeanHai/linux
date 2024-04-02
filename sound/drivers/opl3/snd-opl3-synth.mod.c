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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x6ea09972, "snd_midi_channel_alloc_set" },
	{ 0x919eca22, "snd_device_register" },
	{ 0x7efe1848, "snd_opl3_reset" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xb9948d2c, "snd_midi_channel_free_set" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x16cc211f, "snd_seq_create_kernel_client" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa9621e00, "__snd_seq_driver_register" },
	{ 0xe7cbaa2f, "snd_opl3_find_patch" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf0a1fdb3, "snd_midi_process_event" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd52a5f90, "snd_opl3_load_patch" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5060a19, "snd_opl3_regmap" },
	{ 0xa9c53bfd, "snd_seq_device_new" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0xb8f7a2cb, "snd_seq_event_port_attach" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x4324c313, "snd_seq_driver_unregister" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-emul,snd,snd-opl3-lib,snd-seq,snd-seq-device";


MODULE_INFO(srcversion, "C0B5133DE031B5EC6A9BA9C");
MODULE_INFO(rhelversion, "8.0");

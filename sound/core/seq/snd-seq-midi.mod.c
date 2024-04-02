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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0x8150b379, "snd_midi_event_reset_encode" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x9e4f63f7, "snd_rawmidi_kernel_release" },
	{ 0x16cc211f, "snd_seq_create_kernel_client" },
	{ 0xf0dd707d, "snd_rawmidi_kernel_open" },
	{ 0x91715312, "sprintf" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0x843c7c6c, "snd_rawmidi_input_params" },
	{ 0xa9621e00, "__snd_seq_driver_register" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0x27e1a049, "printk" },
	{ 0xa91e7a8a, "snd_rawmidi_drain_output" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0x87d023e4, "snd_rawmidi_kernel_write" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x68f978f3, "snd_rawmidi_kernel_read" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0x8ab19a3a, "snd_rawmidi_output_params" },
	{ 0x37a0cba, "kfree" },
	{ 0xa59df71c, "snd_midi_event_encode" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x28318305, "snprintf" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x4324c313, "snd_seq_driver_unregister" },
	{ 0xdf8d84e8, "snd_rawmidi_info_select" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device";


MODULE_INFO(srcversion, "DD69AD02B7F2582E9C7DC40");
MODULE_INFO(rhelversion, "8.0");

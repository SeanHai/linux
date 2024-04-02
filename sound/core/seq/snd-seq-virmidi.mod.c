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
	{ 0xea2b701b, "up_read" },
	{ 0x8150b379, "snd_midi_event_reset_encode" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x1d5f0bd9, "snd_device_free" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x16cc211f, "snd_seq_create_kernel_client" },
	{ 0x323ba4d1, "snd_rawmidi_set_ops" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x91715312, "sprintf" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0x51e0b936, "snd_rawmidi_new" },
	{ 0x91185511, "down_read" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0x368efaf5, "__snd_rawmidi_transmit_peek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xc8c43e0d, "__snd_rawmidi_transmit_ack" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xa59df71c, "snd_midi_event_encode" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x7b5849e5, "snd_rawmidi_transmit" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x1c6763ac, "snd_rawmidi_receive" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd,snd-rawmidi";


MODULE_INFO(srcversion, "7CC0CC3BEA6AFD7D495B949");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x3737ae5c, "snd_util_mem_avail" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x919eca22, "snd_device_register" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x1d5f0bd9, "snd_device_free" },
	{ 0xd118b2d1, "snd_info_create_card_entry" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x16cc211f, "snd_seq_create_kernel_client" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xf0a1fdb3, "snd_midi_process_event" },
	{ 0xbe5af6ef, "snd_hwdep_new" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x833a3e07, "snd_midi_channel_set_clear" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xba705780, "snd_info_free_entry" },
	{ 0x6083200b, "snd_virmidi_new" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0xa9c53bfd, "snd_seq_device_new" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0xb8f7a2cb, "snd_seq_event_port_attach" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xdb02a8a3, "snd_info_register" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-util-mem,snd,snd-seq,snd-seq-midi-emul,snd-hwdep,snd-seq-virmidi,snd-seq-device";


MODULE_INFO(srcversion, "26D5E1266F27ADB79DA7A23");
MODULE_INFO(rhelversion, "8.0");

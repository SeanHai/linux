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
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0xcc8d919, "snd_midi_event_encode_byte" },
	{ 0xa1e3a59, "snd_seq_kernel_client_write_poll" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x16cc211f, "snd_seq_create_kernel_client" },
	{ 0x91715312, "sprintf" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0xa9621e00, "__snd_seq_driver_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x3061c52d, "snd_use_lock_sync_helper" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x85d45f4d, "noop_llseek" },
	{ 0x7a3e0db5, "snd_midi_event_no_status" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x3ed24bd4, "snd_register_oss_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0x43ad0a4b, "snd_unregister_oss_device" },
	{ 0x22d26bd6, "snd_seq_kernel_client_enqueue_blocking" },
	{ 0x37a0cba, "kfree" },
	{ 0x947e8457, "snd_seq_root" },
	{ 0xba705780, "snd_info_free_entry" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x121da905, "queue_work_on" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf84366d7, "snd_info_create_module_entry" },
	{ 0xb8e448a0, "snd_seq_set_queue_tempo" },
	{ 0xdb02a8a3, "snd_info_register" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x4324c313, "snd_seq_driver_unregister" },
	{ 0xcac0a3be, "snd_seq_kernel_client_enqueue" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq,snd-seq-midi-event,snd-seq-device,snd";


MODULE_INFO(srcversion, "920717504476E3565FCE7F3");
MODULE_INFO(rhelversion, "8.0");

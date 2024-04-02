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
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xfb2485f, "put_pid" },
	{ 0xea2b701b, "up_read" },
	{ 0x9839d98e, "snd_register_device" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xfbf61a86, "pid_vnr" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa9414778, "snd_device_initialize" },
	{ 0x28cde093, "no_llseek" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x6339b6d0, "snd_seq_device_load_drivers" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x91715312, "sprintf" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x91185511, "down_read" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x91def1c, "snd_seq_autoload_exit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x14b34fc7, "snd_unregister_device" },
	{ 0x3971b4df, "snd_ecards_limit" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x346f4f9a, "snd_timer_pause" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x19eb0f73, "snd_timer_resolution" },
	{ 0x85142f62, "up_write" },
	{ 0x65baf559, "down_write" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xdd06731e, "snd_timer_start" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xfc89858d, "snd_timer_open" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1e01660e, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcdcb2ddf, "snd_timer_close" },
	{ 0x947e8457, "snd_seq_root" },
	{ 0xba705780, "snd_info_free_entry" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x4a3ea5c0, "snd_request_card" },
	{ 0x28318305, "snprintf" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x370a0736, "snd_seq_autoload_init" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xf84366d7, "snd_info_create_module_entry" },
	{ 0xdb02a8a3, "snd_info_register" },
	{ 0x32d2ba9f, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-seq-device,snd-timer";


MODULE_INFO(srcversion, "0667CE01C7E838961568579");
MODULE_INFO(rhelversion, "8.0");

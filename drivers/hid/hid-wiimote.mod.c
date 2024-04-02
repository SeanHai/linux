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
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0xa22b7d0a, "hid_open_report" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xc7f4b92, "single_open" },
	{ 0x754d539c, "strlen" },
	{ 0x35fbc3c8, "input_ff_create_memless" },
	{ 0x985ca3e0, "single_release" },
	{ 0xc768d450, "power_supply_unregister" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x887e3fda, "power_supply_powers" },
	{ 0x448eac3e, "kmemdup" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x91715312, "sprintf" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x822030b4, "input_set_abs_params" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0xfe7843b, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37c5895d, "power_supply_get_drvdata" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7544d0ce, "hid_hw_close" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x79a335e9, "debugfs_remove" },
	{ 0x7a3b5a07, "hid_hw_open" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x9a910d01, "simple_open" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x86fae1be, "hid_hw_stop" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x85ffabba, "get_device" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x90988a50, "__hid_register_driver" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x121da905, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0x52fa86ad, "hid_hw_start" },
	{ 0x8368044b, "power_supply_register" },
	{ 0xcc63e6cd, "hid_unregister_driver" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ff-memless";

MODULE_ALIAS("hid:b0005g*v0000057Ep00000306");
MODULE_ALIAS("hid:b0005g*v0000057Ep00000330");

MODULE_INFO(srcversion, "61BAE27DC3F1C7A0E9C889B");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x754d539c, "strlen" },
	{ 0x1495ef, "led_trigger_event" },
	{ 0x28cde093, "no_llseek" },
	{ 0x903c69e0, "kobject_uevent" },
	{ 0x1e0019e2, "input_unregister_handle" },
	{ 0x577cee77, "led_trigger_register" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x65a09adc, "input_register_handler" },
	{ 0x91715312, "sprintf" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6bddef80, "misc_register" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xc2dfb891, "input_unregister_handler" },
	{ 0x91018733, "device_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb1d8562a, "input_close_device" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x2423d4cd, "led_trigger_unregister" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0xebca8b54, "mod_delayed_work_on" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x22250dd3, "input_open_device" },
	{ 0xcca62a76, "device_add" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc6cbbc89, "capable" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xd0c86c05, "put_device" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x516df465, "input_register_handle" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x551be51f, "device_initialize" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x121da905, "queue_work_on" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0x6c07d933, "add_uevent_var" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CA866942B7F977903AB62D6");
MODULE_INFO(rhelversion, "8.0");

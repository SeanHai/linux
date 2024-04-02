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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x1495ef, "led_trigger_event" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0x91715312, "sprintf" },
	{ 0xf46aaa47, "devres_alloc_node" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x44b5ee9a, "kasprintf" },
	{ 0xfe7843b, "input_event" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x91018733, "device_del" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xd75f1a32, "class_unregister" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xcca62a76, "device_add" },
	{ 0x466c9ad3, "__class_register" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf789deff, "input_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd03ba39a, "devres_add" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0xe6ceed91, "led_trigger_unregister_simple" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x430efa2f, "kobject_get_path" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0x551be51f, "device_initialize" },
	{ 0x50a90e8d, "bsearch" },
	{ 0x3a05ef87, "led_trigger_register_simple" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xb0e602eb, "memmove" },
	{ 0x76ca9e4e, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6c07d933, "add_uevent_var" },
	{ 0xd55379f7, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "61BF9EB00F2ADE6CA502726");
MODULE_INFO(rhelversion, "8.0");

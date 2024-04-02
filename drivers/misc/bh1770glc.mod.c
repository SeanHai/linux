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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xa0d5ac30, "sysfs_notify" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x91715312, "sprintf" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd96ed058, "i2c_smbus_write_i2c_block_data" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:bh1770glc");
MODULE_ALIAS("i2c:sfh7770");

MODULE_INFO(srcversion, "87564435DAAEC35AAD26645");
MODULE_INFO(rhelversion, "8.0");

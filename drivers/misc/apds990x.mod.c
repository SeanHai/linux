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
	{ 0xf9c388e5, "dev_err" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0xa0d5ac30, "sysfs_notify" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x33d51101, "i2c_smbus_read_word_data" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x31825d44, "i2c_smbus_write_word_data" },
	{ 0x37a0cba, "kfree" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x12a38747, "usleep_range" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:apds990x");

MODULE_INFO(srcversion, "537D521E8DBC11605F1E2A3");
MODULE_INFO(rhelversion, "8.0");

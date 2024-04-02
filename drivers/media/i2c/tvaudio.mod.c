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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xdca4e2a, "v4l2_ctrl_handler_setup" },
	{ 0x565d0104, "v4l2_ctrl_cluster" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf65fde3e, "v4l2_i2c_subdev_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x8038b37c, "v4l2_ctrl_handler_log_status" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x27e1a049, "printk" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0x1000e51, "schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xf7d6636f, "current_task" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x1b7ade5b, "v4l2_device_unregister_subdev" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("i2c:tvaudio");

MODULE_INFO(srcversion, "163C5343E7DB83DE527B6E1");
MODULE_INFO(rhelversion, "8.0");

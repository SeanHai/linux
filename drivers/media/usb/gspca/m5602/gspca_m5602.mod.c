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
	{ 0x4a27d4e6, "gspca_suspend" },
	{ 0x565d0104, "v4l2_ctrl_cluster" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xe211ead1, "gspca_dev_probe" },
	{ 0xa14f9828, "gspca_resume" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x5aa7360c, "gspca_disconnect" },
	{ 0x456e53b3, "v4l2_ctrl_new_std_menu" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf7d6636f, "current_task" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0x2edddbb7, "usb_control_msg" },
	{ 0xdf71f10b, "v4l2_ctrl_new_custom" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37b90fbc, "v4l2_ctrl_auto_cluster" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x319ba45f, "gspca_frame_add" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x89d49eda, "usb_register_driver" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main,videodev";

MODULE_ALIAS("usb:v0402p5602d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9D44504AF1570E0CC96D5E0");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x6dc87645, "param_array_ops" },
	{ 0xb7708a16, "saa7134_vb2_buffer_queue" },
	{ 0x9109d1c1, "saa7134_ts_buffer_prepare" },
	{ 0x12ba8f32, "saa7134_ts_buffer_init" },
	{ 0xffe97911, "vb2_ops_wait_finish" },
	{ 0x41e6ca3f, "vb2_ops_wait_prepare" },
	{ 0x95843ced, "saa7134_ts_queue_setup" },
	{ 0x5b96593b, "vb2_fop_release" },
	{ 0xbdaff62e, "v4l2_fh_open" },
	{ 0xffa26bf1, "vb2_fop_mmap" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0x7ffaca99, "vb2_fop_poll" },
	{ 0xcf24fbd0, "vb2_fop_read" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0x1f751a17, "v4l2_ctrl_log_status" },
	{ 0x1b40b48c, "saa7134_s_frequency" },
	{ 0xb83d634a, "saa7134_g_frequency" },
	{ 0x4afb1158, "saa7134_s_tuner" },
	{ 0xbfdda901, "saa7134_g_tuner" },
	{ 0x97447b, "saa7134_s_input" },
	{ 0xd5aafecf, "saa7134_g_input" },
	{ 0xaaa00063, "saa7134_enum_input" },
	{ 0x2dcaa1af, "saa7134_querystd" },
	{ 0x295d8dff, "saa7134_s_std" },
	{ 0xe8ea919b, "saa7134_g_std" },
	{ 0xe2d7fadd, "vb2_ioctl_streamoff" },
	{ 0x12398383, "vb2_ioctl_streamon" },
	{ 0x2f908924, "vb2_ioctl_dqbuf" },
	{ 0xe8c84774, "vb2_ioctl_expbuf" },
	{ 0x8bb39a49, "vb2_ioctl_qbuf" },
	{ 0x7b096c40, "vb2_ioctl_querybuf" },
	{ 0xa831d829, "vb2_ioctl_reqbufs" },
	{ 0x1b8343b3, "saa7134_querycap" },
	{ 0xccb44052, "saa7134_ts_unregister" },
	{ 0xa33147ec, "saa7134_ts_register" },
	{ 0x27e1a049, "printk" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0xba1fd87e, "vb2_queue_init" },
	{ 0x2dddb05a, "vb2_dma_sg_memops" },
	{ 0xc235c60d, "v4l2_ctrl_add_handler" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x28318305, "snprintf" },
	{ 0x730c4be3, "saa7134_boards" },
	{ 0xc522215d, "video_device_release" },
	{ 0xd7e70a82, "video_device_alloc" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0xae35f2d5, "vb2_queue_release" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0x317a8ad6, "flush_work" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x63e0422c, "video_devdata" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x70e522e9, "saa7134_ts_start_streaming" },
	{ 0xf9a482f9, "msleep" },
	{ 0x10943b02, "saa7134_ts_stop_streaming" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7134,videobuf2-v4l2,videodev,videobuf2-dma-sg";


MODULE_INFO(srcversion, "544AFF4BB3CF21403C17950");
MODULE_INFO(rhelversion, "8.0");

#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xf9cf01a6, "vb2_core_streamoff" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xba863e6b, "vb2_core_dqbuf" },
	{ 0xd0d1a5e4, "vb2_mmap" },
	{ 0x77c5a0d3, "vb2_core_qbuf" },
	{ 0x7d9b23e, "vb2_core_querybuf" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x45218d15, "vb2_core_streamon" },
	{ 0xc8b41e2c, "vb2_core_poll" },
	{ 0xc6ad7486, "vb2_read" },
	{ 0xa523b0aa, "vb2_core_prepare_buf" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0xf52ae23c, "v4l2_event_pending" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x93184044, "v4l2_fh_release" },
	{ 0xcbe3c9e, "vb2_core_queue_release" },
	{ 0x633052e8, "vb2_write" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa5dea12c, "vb2_core_create_bufs" },
	{ 0x95e3adfe, "vb2_core_expbuf" },
	{ 0x83bca6c, "vb2_core_reqbufs" },
	{ 0xf37feddb, "vb2_verify_memory_type" },
	{ 0x9acf20f, "vb2_core_queue_init" },
	{ 0xc2765b2d, "vb2_buffer_in_use" },
	{ 0x2f548802, "ns_to_timeval" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-common,videodev";


MODULE_INFO(srcversion, "C27BD0B23031367051CD0C2");
MODULE_INFO(rhelversion, "8.0");

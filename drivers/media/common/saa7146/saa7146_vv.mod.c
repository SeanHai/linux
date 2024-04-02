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
	{ 0x5b282c24, "videobuf_to_dma" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbc0b14e3, "v4l2_event_unsubscribe" },
	{ 0xe8b1e044, "video_device_release_empty" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x5b64acc, "videobuf_mmap_mapper" },
	{ 0x614dd5a, "v4l2_video_std_frame_period" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0x6b25ae0e, "v4l2_ctrl_new_std" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xabf9d8e3, "videobuf_queue_cancel" },
	{ 0x7adb1ab2, "videobuf_streamon" },
	{ 0x58a7cfd2, "__video_register_device" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xdb43f398, "videobuf_iolock" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5af3c0c5, "saa7146_pgtable_free" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x55d99339, "saa7146_pgtable_alloc" },
	{ 0x7c0d7684, "videobuf_read_one" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x702acb23, "videobuf_qbuf" },
	{ 0x4adb80b3, "video_unregister_device" },
	{ 0xd391d30a, "v4l2_fh_init" },
	{ 0x34a6057d, "v4l2_ctrl_subscribe_event" },
	{ 0x48ce84a, "saa7146_pgtable_build_single" },
	{ 0xa42d03d6, "videobuf_querybuf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x101c6930, "videobuf_read_stream" },
	{ 0xdabee779, "videobuf_dma_unmap" },
	{ 0x4a350ace, "videobuf_queue_sg_init" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x80bae4b5, "videobuf_stop" },
	{ 0x3adbd595, "v4l2_field_names" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x63e0422c, "video_devdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe3cd9b5c, "saa7146_debug" },
	{ 0x86fe1e9d, "videobuf_dqbuf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xa98781ce, "videobuf_waiton" },
	{ 0x37a0cba, "kfree" },
	{ 0x47e1ce5c, "videobuf_reqbufs" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0xb2ac8589, "v4l2_fh_add" },
	{ 0x241d05f0, "videobuf_dma_free" },
	{ 0x57ad6881, "v4l2_fh_del" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0x1c483a9, "v4l2_get_timestamp" },
	{ 0xdfc15723, "video_ioctl2" },
	{ 0x2bdca92, "videobuf_poll_stream" },
	{ 0xa08ed5ea, "v4l2_ctrl_poll" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xeed87698, "v4l2_fh_exit" },
	{ 0x7b303aa, "videobuf_streamoff" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-dma-sg,videodev,videobuf-core,saa7146,v4l2-common";


MODULE_INFO(srcversion, "A8292A64A5B2C825B13CF4A");
MODULE_INFO(rhelversion, "8.0");

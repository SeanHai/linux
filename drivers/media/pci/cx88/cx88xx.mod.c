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
	{ 0x5eba9410, "__request_region" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe8b1e044, "video_device_release_empty" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x96c3c8b, "ir_raw_event_store_with_filter" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xdc3ef0f1, "v4l2_i2c_new_subdev" },
	{ 0xae909197, "hrtimer_forward" },
	{ 0xdbf0296, "tveeprom_hauppauge_analog" },
	{ 0x5569f521, "v4l2_device_unregister" },
	{ 0xf97d1a04, "hrtimer_cancel" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xc40c9cea, "v4l2_ctrl_handler_free" },
	{ 0xf2a353ac, "v4l2_i2c_tuner_addrs" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x91715312, "sprintf" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x787843b6, "v4l2_device_register" },
	{ 0x9181e45, "hrtimer_start_range_ns" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0xf7d6636f, "current_task" },
	{ 0x855a325a, "freezing_slow_path" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe6617477, "vb2_buffer_done" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0x5792f848, "strlcpy" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xfa42bb03, "rc_keydown_notimeout" },
	{ 0xefe0d93, "tveeprom_read" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x6c7f12ee, "rc_keyup" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x6a584776, "i2c_smbus_xfer" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xb678366f, "int_sqrt" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x43ee9182, "v4l2_ctrl_grab" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xdc14eda7, "pci_pci_problems" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xdf243169, "hrtimer_init" },
	{ 0xedc03953, "iounmap" },
	{ 0xadc17cd5, "v4l2_ctrl_handler_init_class" },
	{ 0x816a3c16, "i2c_bit_add_bus" },
	{ 0x28318305, "snprintf" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x534ad7af, "ir_raw_event_handle" },
	{ 0x62a67793, "i2c_new_device" },
	{ 0xf3251e7b, "v4l2_norm_to_name" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core,videodev,v4l2-common,tveeprom,videobuf2-common,i2c-algo-bit";


MODULE_INFO(srcversion, "8202579EF6E585540D06E49");
MODULE_INFO(rhelversion, "8.0");

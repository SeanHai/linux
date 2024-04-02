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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xea4fcb9c, "blk_rq_map_sg" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x9ad8cf3d, "blk_queue_segment_boundary" },
	{ 0x17c430a5, "blk_queue_max_segments" },
	{ 0x342ce1f6, "__alloc_disk_node" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x91715312, "sprintf" },
	{ 0x65ff5490, "blk_mq_init_sq_queue" },
	{ 0xfb578fc5, "memset" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xb43d43fd, "blk_mq_stop_hw_queues" },
	{ 0xe288808d, "blk_mq_start_request" },
	{ 0x36fcc755, "device_add_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x29361773, "complete" },
	{ 0x754d539c, "strlen" },
	{ 0x9166fada, "strncpy" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x4ce03c47, "blk_mq_start_hw_queues" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x44d14e59, "blk_mq_end_request" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x13c0d491, "blk_execute_rq_nowait" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xacaf7ca3, "blk_get_request" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x27e1a049, "printk" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdd2723df, "del_gendisk" },
	{ 0x2612ff0c, "put_disk" },
	{ 0xc1a89ec, "blk_cleanup_queue" },
	{ 0x21f7fd27, "blk_mq_free_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v0000105Ad00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9B2208BD4AE880D5B12CD71");
MODULE_INFO(rhelversion, "8.0");

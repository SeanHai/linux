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
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x2502643a, "memstick_alloc_host" },
	{ 0x52a7c81, "memstick_free_host" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x36e44007, "memstick_suspend_host" },
	{ 0xcbbaea64, "memstick_detect_change" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xdd43ab9d, "memstick_resume_host" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xeb81585a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe3d22f3, "memstick_remove_host" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x57a9e884, "sg_miter_start" },
	{ 0x27e1a049, "printk" },
	{ 0xc2e1f262, "kthread_stop" },
	{ 0x110b1d91, "sg_miter_stop" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8fc50580, "sg_miter_next" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x54e28e88, "memstick_next_req" },
	{ 0x41533704, "memstick_add_host" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa975ccbd, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x8c69e82c, "pci_ioremap_bar" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=memstick";

MODULE_ALIAS("pci:v00001180d00000592sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "36D30D2E6A6EAF87350B6B9");
MODULE_INFO(rhelversion, "8.0");

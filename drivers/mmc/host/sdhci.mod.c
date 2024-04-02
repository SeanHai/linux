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
	{ 0x507b14dd, "mmc_command_done" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdffad8a9, "sdio_run_irqs" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xf570d6aa, "mmc_detect_change" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x31c71421, "mmc_free_host" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xff4f5a38, "dma_direct_sync_single_for_cpu" },
	{ 0xea8c7f8c, "dma_direct_sync_sg_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x5b6b0329, "swiotlb_max_segment" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x57a9e884, "sg_miter_start" },
	{ 0x27e1a049, "printk" },
	{ 0x799970a0, "mmc_can_gpio_cd" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x110b1d91, "sg_miter_stop" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x8fc50580, "sg_miter_next" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe287b010, "mmc_gpio_get_cd" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd5a40d6, "mmc_abort_tuning" },
	{ 0xb73a2f0d, "mmc_add_host" },
	{ 0xb25e30a0, "mmc_alloc_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x24cf3d1c, "mmc_regulator_get_supply" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x944b609, "mmc_remove_host" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0xaa309cf, "synchronize_hardirq" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0xc41c945e, "dma_direct_sync_single_for_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x28318305, "snprintf" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xab7505cc, "mmc_request_done" },
	{ 0x2a7763c5, "mmc_retune_timer_stop" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";


MODULE_INFO(srcversion, "355EE3CDA80DC2A57FB85C0");
MODULE_INFO(rhelversion, "8.0");

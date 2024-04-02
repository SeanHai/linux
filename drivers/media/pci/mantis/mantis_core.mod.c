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
	{ 0x317a8ad6, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5eba9410, "__request_region" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x77352286, "dvb_dmx_init" },
	{ 0x93eacf30, "dvb_unregister_adapter" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x14956fe4, "dvb_register_frontend" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xf7340ca9, "i2c_transfer" },
	{ 0xd21dbb5, "dvb_ca_en50221_camchange_irq" },
	{ 0xf9a3fce5, "dvb_unregister_frontend" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0xfb04bc86, "dvb_ca_en50221_camready_irq" },
	{ 0xcf5ab5e1, "dvb_net_release" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0xb06ee9f4, "dvb_frontend_detach" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0x975eb5b8, "param_ops_short" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8c9697b3, "dvb_dmxdev_release" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x19e92411, "dvb_dmx_swfilter" },
	{ 0xc0705353, "dvb_net_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd491a78a, "rc_keydown" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x81c980e7, "dvb_ca_en50221_release" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x88260da4, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x4b760fd6, "dvb_dmx_swfilter_204" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x68a80d60, "dvb_register_adapter" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x28db4633, "dvb_ca_en50221_init" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6a404590, "dvb_dmxdev_init" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core,dvb-core";


MODULE_INFO(srcversion, "BCD0C5937667999059DB7B3");
MODULE_INFO(rhelversion, "8.0");

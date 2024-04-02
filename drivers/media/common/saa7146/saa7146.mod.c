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
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x63c8b394, "pci_release_region" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x91715312, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4a928de6, "mutex_lock_interruptible" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3de37959, "vmalloc_to_page" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x18c475b, "pci_request_region" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "379AF8ED885149C2239F98A");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0xbb75ce8e, "umc_driver_unregister" },
	{ 0xbfeaac4d, "__umc_driver_register" },
	{ 0x5776004c, "uwb_rc_neh_grok" },
	{ 0xae127601, "uwb_rc_add" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5eba9410, "__request_region" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x19de6621, "uwb_rc_alloc" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x841b74b, "uwb_rc_reset_all" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb0e602eb, "memmove" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe484e35f, "ioread32" },
	{ 0x75cce89c, "umc_controller_reset" },
	{ 0x6a4a70e8, "whci_wait_for" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb43a245f, "uwb_rc_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xa479db2f, "uwb_rc_rm" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xbed06245, "uwb_rc_pre_reset" },
	{ 0x4f6cd70f, "uwb_rc_post_reset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=umc,uwb,whci";

MODULE_ALIAS("pci:v*d*sv*sd*bc0Dsc10i10*");

MODULE_INFO(srcversion, "F5C34508050EB0C2BAB907F");
MODULE_INFO(rhelversion, "8.0");

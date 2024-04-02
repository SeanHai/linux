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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xefbca4c, "btracker_promotion_already_present" },
	{ 0xa2365f44, "btracker_issue" },
	{ 0x999e8297, "vfree" },
	{ 0xbf1a2968, "btracker_create" },
	{ 0xa08c2307, "dm_cache_policy_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5adc2807, "btracker_destroy" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xccfe6409, "btracker_nr_demotions_queued" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xa7eadcb5, "btracker_complete" },
	{ 0x16f5f8f8, "dm_cache_policy_unregister" },
	{ 0x87bee547, "btracker_queue" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-cache";


MODULE_INFO(srcversion, "AC72BB65C8267A5D1FFD11B");
MODULE_INFO(rhelversion, "8.0");

/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG) && ENABLE(SVG_FONTS)

#include "JSSVGFontElement.h"

#include "SVGFontElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGFontElementTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFontElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFontElementTable = { 2, 1, JSSVGFontElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGFontElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFontElementConstructorTable = { 1, 0, JSSVGFontElementConstructorTableValues, 0 };
const ClassInfo JSSVGFontElementConstructor::s_info = { "SVGFontElementConstructor", &Base::s_info, &JSSVGFontElementConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGFontElementConstructor) };

JSSVGFontElementConstructor::JSSVGFontElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGFontElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGFontElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGFontElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFontElementConstructor, JSDOMWrapper>(exec, JSSVGFontElementConstructorTable, jsCast<JSSVGFontElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGFontElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGFontElementPrototypeTable = { 1, 0, JSSVGFontElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFontElementPrototype::s_info = { "SVGFontElementPrototype", &Base::s_info, &JSSVGFontElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGFontElementPrototype) };

JSObject* JSSVGFontElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFontElement>(vm, globalObject);
}

const ClassInfo JSSVGFontElement::s_info = { "SVGFontElement", &Base::s_info, &JSSVGFontElementTable, 0 , CREATE_METHOD_TABLE(JSSVGFontElement) };

JSSVGFontElement::JSSVGFontElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFontElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

void JSSVGFontElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGFontElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGFontElementPrototype::create(vm, globalObject, JSSVGFontElementPrototype::createStructure(vm, globalObject, JSSVGElementPrototype::self(vm, globalObject)));
}

bool JSSVGFontElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGFontElement* thisObject = jsCast<JSSVGFontElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGFontElement, Base>(exec, JSSVGFontElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGFontElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGFontElement* domObject = jsDynamicCast<JSSVGFontElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGFontElement::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGFontElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFontElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_FONTS)
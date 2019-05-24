(ns travel-time-platform-api.specs.request-time-filter-postcodes-departure-search
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [travel-time-platform-api.specs.request-transportation :refer :all]
            [travel-time-platform-api.specs.request-time-filter-postcodes-property :refer :all]
            [travel-time-platform-api.specs.request-range-full :refer :all]
            )
  (:import (java.io File)))


(def request-time-filter-postcodes-departure-search-data
  {
   (ds/req :id) string?
   (ds/req :transportation) request-transportation-spec
   (ds/req :travel_time) int?
   (ds/req :departure_time) inst?
   (ds/req :properties) (s/coll-of request-time-filter-postcodes-property-spec)
   (ds/opt :range) request-range-full-spec
   })

(def request-time-filter-postcodes-departure-search-spec
  (ds/spec
    {:name ::request-time-filter-postcodes-departure-search
     :spec request-time-filter-postcodes-departure-search-data}))
